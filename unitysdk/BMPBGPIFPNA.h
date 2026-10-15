#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define BMPBGPIFPNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8BD0C0)

	class BMPBGPIFPNA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "BMPBGPIFPNA")->GetStaticField(0x20580);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMPBGPIFPNA")->GetStaticField(0x20588);
		}

		// static const ::System::Object MJCOFFAOFMD; // 0x0
		// static const ::System::Object HFMKEMDOOGD; // 0x0
		// static const ::System::Object MPGPMGBLOEA; // 0x0
		// static const ::System::Object BCEBMODKCFP; // 0x0
		// static const ::System::Object HDIOPNEGHIG; // 0x0
		// static const ::System::Object IHLPHCLMMJD; // 0x0
		// static const ::System::Object NGAGPONIBLP; // 0x0
		// static const ::System::Object PKDCDHAHAGP; // 0x0
		// static const ::System::Object LLBAOGMMPEK; // 0x0
		// static const ::System::Object CLOCKOHEGKP; // 0x0
		// static const ::System::Object ODJKEGMNFHJ; // 0x0
		// static const ::System::Object FPOBMNHMKMJ; // 0x0
		// static const ::System::Object IDDBBOCGJJI; // 0x0
		// static const ::System::Object NJECIGBOMHM; // 0x0
		// static const ::System::Object IHCEBOKFKGD; // 0x0
		// static const ::System::Object HDBBNHNLPLC; // 0x0
		// static const ::System::Object BFJBPEDIKGH; // 0x0
		// static const ::System::Object COKEEHONOIJ; // 0x0
		// static const ::System::Object OCMGEEGGMCD; // 0x0
		// static const ::System::Object CPGIHBCBHLN; // 0x0
		// static const ::System::Object HNMHNBBHFKN; // 0x0
		// static const ::System::Object HGAIOKLHOMI; // 0x0
		// static const ::System::Object AOOGMFNNIFF; // 0x0
		// static const ::System::Object LKGDAEBDMKN; // 0x0
		// static const ::System::Object PPPAJGDDFOK; // 0x0
		// static const ::System::Object INBJGMIHMAF; // 0x0
		// static const ::System::Object JKNCBBAAHPA; // 0x0
		// static const ::System::Object OEGJLBKGJHJ; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMPBGPIFPNA_CCTOR_OFFSET))();
		}

	};
