#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KGHMBCLFFLG;
namespace RPG::Client { class RelicItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DIPAOFKGPMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF226240)
#define DIPAOFKGPMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF226280)
#define DIPAOFKGPMG___C__GETPREVIEWAVATARWITHVIRTUALRELICS_B__19_0_OFFSET UNITYSDK_OFFSET(0xF226290)

inline static constexpr unsigned int DIPAOFKGPMG___c_TypeDefinitionIndex = 62699;

	class DIPAOFKGPMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56DA0);
		}

		static ::System::Func_2<::RPG::Client::RelicItemData*, ::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::RelicItemData*, ::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIPAOFKGPMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG___C_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> _GetPreviewAvatarWithVirtualRelics_b__19_0(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG___C__GETPREVIEWAVATARWITHVIRTUALRELICS_B__19_0_OFFSET))(this, a1);
		}

	};
