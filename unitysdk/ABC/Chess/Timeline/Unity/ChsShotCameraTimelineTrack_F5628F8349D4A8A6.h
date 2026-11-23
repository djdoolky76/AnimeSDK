#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B7B8795FB90C86A7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6_E1C8774AF77595E6_OFFSET UNITYSDK_OFFSET(0x1CFE5F0)
#define ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFECA0)
#define ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Chess::Timeline::Unity
{
	inline static constexpr unsigned int ChsShotCameraTimelineTrack_F5628F8349D4A8A6_TypeDefinitionIndex = 9860;

	class ChsShotCameraTimelineTrack_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::Chess::Timeline::Unity::ChsShotCameraTimelineTrack_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::Chess::Timeline::Unity::ChsShotCameraTimelineTrack_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ChsShotCameraTimelineTrack_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::B7B8795FB90C86A7*, ::System::Boolean>** StaticGet_A11D69BF37F0CD6C()
		{
			return (::System::Func_2<::B7B8795FB90C86A7*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChsShotCameraTimelineTrack_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean E1C8774AF77595E6(::B7B8795FB90C86A7* B8A196AEAF73E28B)
		{
			return ((::System::Boolean(*)(::PVOID, ::B7B8795FB90C86A7*))((::PBYTE)hIl2Cpp + ABC_CHESS_TIMELINE_UNITY_CHSSHOTCAMERATIMELINETRACK_F5628F8349D4A8A6_E1C8774AF77595E6_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}
