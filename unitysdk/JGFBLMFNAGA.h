#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

class CFHOEGBMPKN;
class ENGKPGFGGLM;
class IJMEEDEBNCH;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
template <typename T> class NMANHEHIJAL_1;

#define JGFBLMFNAGA_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x187368D0)
#define JGFBLMFNAGA_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x187367B0)
#define JGFBLMFNAGA_FKIPEBKBBKJ_OFFSET UNITYSDK_OFFSET(0x18735950)
#define JGFBLMFNAGA_GJPFIBOLMKG_OFFSET UNITYSDK_OFFSET(0x18736410)
#define JGFBLMFNAGA_IBCAJDHLHML_OFFSET UNITYSDK_OFFSET(0x18736840)
#define JGFBLMFNAGA_IHBJIKOLLNN_OFFSET UNITYSDK_OFFSET(0x18735E70)
#define JGFBLMFNAGA_ILAEFLDGOBB_OFFSET UNITYSDK_OFFSET(0x187358C0)
#define JGFBLMFNAGA_JKHBLFIJCME_OFFSET UNITYSDK_OFFSET(0x18735F30)
#define JGFBLMFNAGA_NABCEMBGCGO_OFFSET UNITYSDK_OFFSET(0x18735CB0)
#define JGFBLMFNAGA_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x18735770)
#define JGFBLMFNAGA_ONSTART_OFFSET UNITYSDK_OFFSET(0x18735420)
#define JGFBLMFNAGA_PHDIDCNNPHG_OFFSET UNITYSDK_OFFSET(0x18736420)
#define JGFBLMFNAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x187358B0)

inline static constexpr unsigned int JGFBLMFNAGA_TypeDefinitionIndex = 69395;

class JGFBLMFNAGA : public ::JGELKBLKFHE
{
public:
	::NMANHEHIJAL_1<::IJMEEDEBNCH*>* ALLNGNMGMBG; // 0x18
	::CFHOEGBMPKN* NLJFCAKLBIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void ILAEFLDGOBB(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_ILAEFLDGOBB_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void NABCEMBGCGO(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_NABCEMBGCGO_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void IHBJIKOLLNN(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_IHBJIKOLLNN_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::NMANHEHIJAL_1<::IJMEEDEBNCH*>* GJPFIBOLMKG()
	{
		return ((::NMANHEHIJAL_1<::IJMEEDEBNCH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_GJPFIBOLMKG_OFFSET))(this);
	}

	::System::Void PHDIDCNNPHG(::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_PHDIDCNNPHG_OFFSET))(this, EOJOGGEFMFC);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void JKHBLFIJCME(::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_JKHBLFIJCME_OFFSET))(this, EOJOGGEFMFC, BKLGNCBNEGM);
	}

	::System::Void FKIPEBKBBKJ(::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_FKIPEBKBBKJ_OFFSET))(this, EOJOGGEFMFC);
	}

	::System::Void IBCAJDHLHML(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_IBCAJDHLHML_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFBLMFNAGA_CNIKAMOAANF_OFFSET))(this);
	}
};
