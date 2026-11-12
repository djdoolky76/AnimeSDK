#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEBEHAVIOR_JCNCJLELEDH_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3280F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharMatCameraPropOverrideBehavior_JCNCJLELEDH_TypeDefinitionIndex = 72359;

	class CharMatCameraPropOverrideBehavior_JCNCJLELEDH : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_AKKHGCJDOKA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14AF0);
		}

		static ::System::Int32* StaticGet_PDMMPILIOOP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14AF4);
		}

		static ::System::Int32* StaticGet_HMLIDHGHLBP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14AF8);
		}

		static ::System::UInt32* StaticGet_BBGPMKMNEEB()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14AFC);
		}

		static ::System::UInt32* StaticGet_ABNBHPCPLCA()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14B00);
		}

		static ::System::Int32* StaticGet_NLDGNBGDGGC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14B04);
		}

		static ::System::Int32* StaticGet_JLBMNAEKKNG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14B08);
		}

		static ::System::Int32* StaticGet_HBFECCDCLKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14B0C);
		}

		static ::System::Int32* StaticGet_CGHKBFJHFDK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x14B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEBEHAVIOR_JCNCJLELEDH_CCTOR_OFFSET))();
		}

	};
}
