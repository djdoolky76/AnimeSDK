#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJOKOGDDBIN;
class IBENDELLLAO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCBIKALEPHJ_AHFCNBJFPMP_OFFSET UNITYSDK_OFFSET(0x14993640)
#define DCBIKALEPHJ_BGEHOKGHGOL_OFFSET UNITYSDK_OFFSET(0x14993840)
#define DCBIKALEPHJ_BLGFJHCJCEO_OFFSET UNITYSDK_OFFSET(0x149934D0)
#define DCBIKALEPHJ_DIKKCJAIJEK_OFFSET UNITYSDK_OFFSET(0x14992C10)
#define DCBIKALEPHJ_LOCJCEPDLAO_OFFSET UNITYSDK_OFFSET(0x149937B0)
#define DCBIKALEPHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14992C00)

inline static constexpr unsigned int DCBIKALEPHJ_TypeDefinitionIndex = 92558;

class DCBIKALEPHJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FJOKOGDDBIN*>* OKCEDJCMMHN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* AMCCKFHKFFG; // 0x18
	::IBENDELLLAO* DANLNNHLDKO; // 0x20
	::System::String* LPICCIMAPGM; // 0x28
	::System::String* PPIEELCBOOC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBIKALEPHJ__CTOR_OFFSET))(this);
	}

	::System::Void DIKKCJAIJEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBIKALEPHJ_DIKKCJAIJEK_OFFSET))(this);
	}

	::System::Void BLGFJHCJCEO(::System::Int32 MDJFJPHNGCK, ::System::Int32 JGDAHIOOOKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DCBIKALEPHJ_BLGFJHCJCEO_OFFSET))(this, MDJFJPHNGCK, JGDAHIOOOKH);
	}

	::System::Void AHFCNBJFPMP(::System::Int32 MDJFJPHNGCK, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DCBIKALEPHJ_AHFCNBJFPMP_OFFSET))(this, MDJFJPHNGCK, GOKEGHENOGP);
	}

	::FJOKOGDDBIN* LOCJCEPDLAO(::System::Int32 ABHBKFJKINO)
	{
		return ((::FJOKOGDDBIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCBIKALEPHJ_LOCJCEPDLAO_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void BGEHOKGHGOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBIKALEPHJ_BGEHOKGHGOL_OFFSET))(this);
	}
};
