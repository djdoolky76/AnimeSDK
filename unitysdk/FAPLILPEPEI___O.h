#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFMDCAMPDN;
namespace System { template <typename T> class Predicate_1; }

	class FAPLILPEPEI___O : public ::System::Object
	{
	public:
		static ::BCFMDCAMPDN** StaticGet__4___CheckFinishSubMission()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBB0);
		}

		static ::BCFMDCAMPDN** StaticGet__0___CheckIsMainMissionTaken()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBB8);
		}

		static ::System::Predicate_1<::System::UInt32>** StaticGet__5____CheckIsSubMissionCancel()
		{
			return (::System::Predicate_1<::System::UInt32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBC0);
		}

		static ::BCFMDCAMPDN** StaticGet__1___CheckFinishMainMission()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBC8);
		}

		static ::System::Predicate_1<::System::UInt32>** StaticGet__2____CheckIsMainMissionCancel()
		{
			return (::System::Predicate_1<::System::UInt32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBD0);
		}

		static ::BCFMDCAMPDN** StaticGet__3___CheckIsSubMissionTaken()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5CBD8);
		}

	};
