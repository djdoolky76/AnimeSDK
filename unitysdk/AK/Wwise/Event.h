#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/EF295B11345CD6F6.h"
#include "unitysdk/EF4CA5922781B1FE.h"

class FE399E8C446747BE_AFEB98B5B6A783FC;
class WwiseEventReference;
class WwiseObjectReference;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AK_WWISE_EVENT_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x29130C0)
#define AK_WWISE_EVENT_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x16AFC30)
#define AK_WWISE_EVENT_POST_1_OFFSET UNITYSDK_OFFSET(0x2913380)
#define AK_WWISE_EVENT_POST_2_OFFSET UNITYSDK_OFFSET(0x29131B0)
#define AK_WWISE_EVENT_POST_OFFSET UNITYSDK_OFFSET(0x29132B0)
#define AK_WWISE_EVENT_STOP_OFFSET UNITYSDK_OFFSET(0x2913450)
#define AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AK_WWISE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 21583;

	class Event : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseEventReference* WwiseObjectReference; // 0x20
		::System::UInt32 m_playingId; // 0x28

		::System::UInt32 Post(::System::UInt64 BF090A8F5C59243D)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_OFFSET))(this, BF090A8F5C59243D);
		}

		::System::UInt32 Post_1(::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_1_OFFSET))(this, BC63F4052E4478D7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT__CTOR_OFFSET))(this);
		}

		::System::Void Stop(::UnityEngine::GameObject* BC63F4052E4478D7, ::System::Int32 B31AABB4B0D18840, ::EF295B11345CD6F6 B5A910D5A0A3351D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::EF295B11345CD6F6))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOP_OFFSET))(this, BC63F4052E4478D7, B31AABB4B0D18840, B5A910D5A0A3351D);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::UInt32 Post_2(::UnityEngine::GameObject* BC63F4052E4478D7, ::System::UInt32 ABDE0F2A254CEB88, ::FE399E8C446747BE_AFEB98B5B6A783FC* E04D2BE64FCE9814, ::System::Object* F74A819D3F10B9E7)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::FE399E8C446747BE_AFEB98B5B6A783FC*, ::System::Object*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_2_OFFSET))(this, BC63F4052E4478D7, ABDE0F2A254CEB88, E04D2BE64FCE9814, F74A819D3F10B9E7);
		}

		::System::Void VerifyPlayingID(::System::UInt32 F72D4C91EA432997)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET))(this, F72D4C91EA432997);
		}

		::System::Void ExecuteAction(::UnityEngine::GameObject* BC63F4052E4478D7, ::EF4CA5922781B1FE AEBC766447256F79, ::System::Int32 B31AABB4B0D18840, ::EF295B11345CD6F6 B5A910D5A0A3351D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::EF4CA5922781B1FE, ::System::Int32, ::EF295B11345CD6F6))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_EXECUTEACTION_OFFSET))(this, BC63F4052E4478D7, AEBC766447256F79, B31AABB4B0D18840, B5A910D5A0A3351D);
		}
	};
}
