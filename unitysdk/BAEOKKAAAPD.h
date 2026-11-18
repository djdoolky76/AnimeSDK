#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGAIGPFJLNJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class BOFMBDEGBFD;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAEOKKAAAPD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D68ABE0)
#define BAEOKKAAAPD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D68B0F0)
#define BAEOKKAAAPD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D68ACB0)
#define BAEOKKAAAPD_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D68B2D0)
#define BAEOKKAAAPD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D68B040)
#define BAEOKKAAAPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AC20)

inline static constexpr unsigned int BAEOKKAAAPD_TypeDefinitionIndex = 93344;

class BAEOKKAAAPD : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BOFMBDEGBFD*>* JMINOGAOFIL; // 0x18
	::LGAIGPFJLNJ DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEOKKAAAPD__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEOKKAAAPD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAEOKKAAAPD_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEOKKAAAPD_PHOADBJGFBE_OFFSET))(this);
	}

	::BOFMBDEGBFD* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::BOFMBDEGBFD*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BAEOKKAAAPD_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEOKKAAAPD_MDGCOKBMLFG_OFFSET))(this);
	}
};
