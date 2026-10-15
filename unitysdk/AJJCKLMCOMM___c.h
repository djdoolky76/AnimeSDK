#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AJJCKLMCOMM;
class HIOEAKHGILF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace UnityEngine { class Collider; }

#define AJJCKLMCOMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CC1720)
#define AJJCKLMCOMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC1750)
#define AJJCKLMCOMM___C___CREATETARGETENTITYFILTER_B__16_0_OFFSET UNITYSDK_OFFSET(0x12CC1760)

inline static constexpr unsigned int AJJCKLMCOMM___c_TypeDefinitionIndex = 77091;

	class AJJCKLMCOMM___c : public ::System::Object
	{
	public:
		static ::System::Func_4<::AJJCKLMCOMM*, ::System::ValueTuple, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_4<::AJJCKLMCOMM*, ::System::ValueTuple, ::UnityEngine::Collider*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B150);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateTargetEntityFilter_b__16_0(::AJJCKLMCOMM* a1, ::System::ValueTuple a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJJCKLMCOMM*, ::System::ValueTuple, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C___CREATETARGETENTITYFILTER_B__16_0_OFFSET))(this, a1, a2, a3);
		}

	};
