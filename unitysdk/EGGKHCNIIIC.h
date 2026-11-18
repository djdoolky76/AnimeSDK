#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"

class MFBMJKGGHHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EGGKHCNIIIC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x154A96C0)
#define EGGKHCNIIIC_CPIAFMNAAEE_OFFSET UNITYSDK_OFFSET(0x154A9740)
#define EGGKHCNIIIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154A8D10)
#define EGGKHCNIIIC_ELBGHKJMFDN_OFFSET UNITYSDK_OFFSET(0x154A90D0)
#define EGGKHCNIIIC_INCNCJNNOGK_OFFSET UNITYSDK_OFFSET(0x154A9460)
#define EGGKHCNIIIC_NBKMJPMJGGK_OFFSET UNITYSDK_OFFSET(0x154A9840)
#define EGGKHCNIIIC_NJFFINAEGFH_OFFSET UNITYSDK_OFFSET(0x154A9590)
#define EGGKHCNIIIC_NMBAGJNHGGI_OFFSET UNITYSDK_OFFSET(0x154A8F50)
#define EGGKHCNIIIC_ONCREATE_OFFSET UNITYSDK_OFFSET(0x154A8E10)
#define EGGKHCNIIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x154A90B0)

inline static constexpr unsigned int EGGKHCNIIIC_TypeDefinitionIndex = 39208;

class EGGKHCNIIIC
{
public:
	::MFBMJKGGHHC* ELKIKFJINIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_ONCREATE_OFFSET))(this);
	}

	static ::System::Boolean ELBGHKJMFDN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGGKHCNIIIC_ELBGHKJMFDN_OFFSET))();
	}

	::System::Void INCNCJNNOGK(::Foundation::ResourceFileType OBNIAHNMHPF, ::System::Boolean LJIFFIFAIJL, ::System::Boolean& DOFMEBGMNLK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_INCNCJNNOGK_OFFSET))(this, OBNIAHNMHPF, LJIFFIFAIJL, DOFMEBGMNLK);
	}

	::System::Void NJFFINAEGFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_NJFFINAEGFH_OFFSET))(this);
	}

	::System::Void NMBAGJNHGGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_NMBAGJNHGGI_OFFSET))(this);
	}

	static ::System::Void BBOMJDBNHIC(::System::Action* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_BBOMJDBNHIC_OFFSET))(DMPEOJCCCLO);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* CPIAFMNAAEE()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_CPIAFMNAAEE_OFFSET))(this);
	}

	::System::Void NBKMJPMJGGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKHCNIIIC_NBKMJPMJGGK_OFFSET))(this);
	}
};
