#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHEOBNPFMLG_CLLBCMNBLPO_OFFSET UNITYSDK_OFFSET(0x1F4D3640)
#define DHEOBNPFMLG_NALLIMFDMDN_OFFSET UNITYSDK_OFFSET(0x1F4D36D0)
#define DHEOBNPFMLG_OAOOMHOFLLO_OFFSET UNITYSDK_OFFSET(0x1F4D33D0)
#define DHEOBNPFMLG_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D3340)
#define DHEOBNPFMLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D3570)
#define DHEOBNPFMLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D31A0)

inline static constexpr unsigned int DHEOBNPFMLG_TypeDefinitionIndex = 8400;

class DHEOBNPFMLG
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_JNFIKGLPIIN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(DHEOBNPFMLG_TypeDefinitionIndex)->GetStaticField(0x72E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::ConfigModuleLib::Runtime::LoadOp*>* BJFLLNJDKPF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Foundation::AssetPath, ::System::Type*>, ::ConfigModuleLib::Runtime::LoadOp*>* DMBCFEEAILI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEOBNPFMLG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHEOBNPFMLG__CCTOR_OFFSET))();
	}

	::System::Void OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEOBNPFMLG_ONDISPOSE_OFFSET))(this);
	}

	::System::Void CLLBCMNBLPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEOBNPFMLG_CLLBCMNBLPO_OFFSET))(this);
	}

	static ::System::Void OAOOMHOFLLO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHEOBNPFMLG_OAOOMHOFLLO_OFFSET))();
	}

	static ::System::Void NALLIMFDMDN(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + DHEOBNPFMLG_NALLIMFDMDN_OFFSET))(GJBHEJGENMI);
	}
};
