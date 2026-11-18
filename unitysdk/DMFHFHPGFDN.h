#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BLCIDFMMHIL;
class ILGGMFDKGPC;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DMFHFHPGFDN_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0x19D7A7F0)
#define DMFHFHPGFDN_DKIMPMDNJGI_OFFSET UNITYSDK_OFFSET(0x19D7A940)
#define DMFHFHPGFDN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19D79AF0)
#define DMFHFHPGFDN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19D79A10)
#define DMFHFHPGFDN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19D7ACB0)
#define DMFHFHPGFDN_IIKBKJMMCKA_OFFSET UNITYSDK_OFFSET(0x19D7A330)
#define DMFHFHPGFDN__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7A850)

inline static constexpr unsigned int DMFHFHPGFDN_TypeDefinitionIndex = 74024;

class DMFHFHPGFDN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHFHPGFDN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void CLHLBOPBDBJ(::System::UInt32 KMMGKJPAOMF, ::System::UInt32 OLAHFMECDAI, ::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_CLHLBOPBDBJ_OFFSET))(this, KMMGKJPAOMF, OLAHFMECDAI, FCCLIEJAKLI);
	}

	::System::Boolean IIKBKJMMCKA(::LGCNEDCMPKM& BKBGPKNGNMF, ::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM, ::System::String* HIAIKHDFCLN, ::BLCIDFMMHIL*& OGMFOALCDAE)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::BLCIDFMMHIL*&))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_IIKBKJMMCKA_OFFSET))(this, BKBGPKNGNMF, EAPIEMGDDMM, HIAIKHDFCLN, OGMFOALCDAE);
	}

	::System::Void DKIMPMDNJGI(::LGCNEDCMPKM& BKBGPKNGNMF, ::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB, ::ILGGMFDKGPC* DGOMMGANKBO)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::Foundation::ViewObject::ViewObjectHandle, ::ILGGMFDKGPC*))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_DKIMPMDNJGI_OFFSET))(this, BKBGPKNGNMF, DBMEFDJPDCB, DGOMMGANKBO);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHFHPGFDN_GDEOPIBNOIN_OFFSET))(this);
	}
};
