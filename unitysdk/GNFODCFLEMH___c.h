#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEEEHNMHAAP;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define GNFODCFLEMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18788A60)
#define GNFODCFLEMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18788A90)
#define GNFODCFLEMH___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET UNITYSDK_OFFSET(0x18788AA0)

inline static constexpr unsigned int GNFODCFLEMH___c_TypeDefinitionIndex = 73430;

	class GNFODCFLEMH___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::LEEEHNMHAAP*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::LEEEHNMHAAP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x717C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x717C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFODCFLEMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshAvatarHUDPanelSiblingIndex_b__10_0(::LEEEHNMHAAP* a1, ::LEEEHNMHAAP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::LEEEHNMHAAP*, ::LEEEHNMHAAP*))((::PBYTE)hIl2Cpp + GNFODCFLEMH___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET))(this, a1, a2);
		}

	};
