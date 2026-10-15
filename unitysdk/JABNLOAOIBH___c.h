#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Discussion/RelativeTransform.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline::Discussion { class SwitchAnchorData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JABNLOAOIBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16532200)
#define JABNLOAOIBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16532240)
#define JABNLOAOIBH___C__GETCLIPANCHORINFO_B__12_0_OFFSET UNITYSDK_OFFSET(0x16532250)
#define JABNLOAOIBH___C__GETCLIPANCHORINFO_B__12_1_OFFSET UNITYSDK_OFFSET(0x16532270)

inline static constexpr unsigned int JABNLOAOIBH___c_TypeDefinitionIndex = 48478;

	class JABNLOAOIBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A460);
		}

		static ::System::Func_2<::RPGTools::Timeline::Discussion::SwitchAnchorData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPGTools::Timeline::Discussion::SwitchAnchorData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A468);
		}

		static ::System::Func_2<::RPGTools::Timeline::Discussion::RelativeTransform, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::RPGTools::Timeline::Discussion::RelativeTransform, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABNLOAOIBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABNLOAOIBH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetClipAnchorInfo_b__12_0(::RPGTools::Timeline::Discussion::SwitchAnchorData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::SwitchAnchorData*))((::PBYTE)hIl2Cpp + JABNLOAOIBH___C__GETCLIPANCHORINFO_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetClipAnchorInfo_b__12_1(::RPGTools::Timeline::Discussion::RelativeTransform a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::RelativeTransform))((::PBYTE)hIl2Cpp + JABNLOAOIBH___C__GETCLIPANCHORINFO_B__12_1_OFFSET))(this, a1);
		}

	};
