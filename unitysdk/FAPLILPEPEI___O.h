#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFMDCAMPDN;
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int FAPLILPEPEI___O_TypeDefinitionIndex = 63619;

	class FAPLILPEPEI___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::UInt32>** StaticGet__2____CheckIsMainMissionCancel()
		{
			return (::System::Predicate_1<::System::UInt32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42160);
		}

		static ::BCFMDCAMPDN** StaticGet__1___CheckFinishMainMission()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42168);
		}

		static ::System::Predicate_1<::System::UInt32>** StaticGet__5____CheckIsSubMissionCancel()
		{
			return (::System::Predicate_1<::System::UInt32>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42170);
		}

		static ::BCFMDCAMPDN** StaticGet__4___CheckFinishSubMission()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42178);
		}

		static ::BCFMDCAMPDN** StaticGet__3___CheckIsSubMissionTaken()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42180);
		}

		static ::BCFMDCAMPDN** StaticGet__0___CheckIsMainMissionTaken()
		{
			return (::BCFMDCAMPDN**)UnitySDK::FromName("", "<>O")->GetStaticField(0x42188);
		}

	};
