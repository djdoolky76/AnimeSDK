#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEBEHAVIOR_JCNCJLELEDH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9C2BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharMatCameraPropOverrideBehavior_JCNCJLELEDH_TypeDefinitionIndex = 70392;

	class CharMatCameraPropOverrideBehavior_JCNCJLELEDH : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_CGHKBFJHFDK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152E0);
		}

		static ::System::Int32* StaticGet_AKKHGCJDOKA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152E4);
		}

		static ::System::Int32* StaticGet_NLDGNBGDGGC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152E8);
		}

		static ::System::UInt32* StaticGet_ABNBHPCPLCA()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152EC);
		}

		static ::System::Int32* StaticGet_JLBMNAEKKNG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152F0);
		}

		static ::System::Int32* StaticGet_PDMMPILIOOP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152F4);
		}

		static ::System::UInt32* StaticGet_BBGPMKMNEEB()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152F8);
		}

		static ::System::Int32* StaticGet_HBFECCDCLKO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x152FC);
		}

		static ::System::Int32* StaticGet_HMLIDHGHLBP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "JCNCJLELEDH")->GetStaticField(0x15300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEBEHAVIOR_JCNCJLELEDH_CCTOR_OFFSET))();
		}

	};
}
