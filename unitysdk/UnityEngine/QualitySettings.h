#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/FC848A77524CFB42.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define UNITYENGINE_QUALITYSETTINGS_AC64C91F550C9D14_OFFSET UNITYSDK_OFFSET(0x4185DA0)
#define UNITYENGINE_QUALITYSETTINGS_BC61A666AE372CFC_OFFSET UNITYSDK_OFFSET(0x4185DD0)
#define UNITYENGINE_QUALITYSETTINGS_EE6B9271F51E548E_OFFSET UNITYSDK_OFFSET(0x4185E00)
#define UNITYENGINE_QUALITYSETTINGS_F87520FCE9A1F1DE_OFFSET UNITYSDK_OFFSET(0x4185D40)

namespace UnityEngine
{
	inline static constexpr unsigned int QualitySettings_TypeDefinitionIndex = 17660;

	class QualitySettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet_E7B487BD26C6244A()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(QualitySettings_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void F87520FCE9A1F1DE(::System::Int32 E617B867D7AE31A3, ::System::Int32 E04BB55F27FF20F3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_F87520FCE9A1F1DE_OFFSET))(E617B867D7AE31A3, E04BB55F27FF20F3);
		}

		static ::System::Int32 BC61A666AE372CFC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_BC61A666AE372CFC_OFFSET))();
		}

		static ::System::Void EE6B9271F51E548E(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_EE6B9271F51E548E_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::FC848A77524CFB42 AC64C91F550C9D14()
		{
			return ((::UnityEngine::FC848A77524CFB42(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUALITYSETTINGS_AC64C91F550C9D14_OFFSET))();
		}
	};
}
