#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define GKGDHODNKGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAB0530)

	class GKGDHODNKGC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "GKGDHODNKGC")->GetStaticField(0x31540);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKGDHODNKGC")->GetStaticField(0x31548);
		}

		// static const ::System::Object DGEBFEOIONC; // 0x0
		// static const ::System::Object EKEFPDFCNOM; // 0x0
		// static const ::System::Object KMAOKEGLJDK; // 0x0
		// static const ::System::Object HFLDHJHJNCF; // 0x0
		// static const ::System::Object BHOFDDFIGHI; // 0x0
		// static const ::System::Object JGEEFEHOCFI; // 0x0
		// static const ::System::Object JPHLGCDCFCE; // 0x0
		// static const ::System::Object FEKAECGDHJD; // 0x0
		// static const ::System::Object GBOALBBCECN; // 0x0
		// static const ::System::Object JDCOFGPBDIJ; // 0x0
		// static const ::System::Object HMCIFPIODLM; // 0x0
		// static const ::System::Object ILBJCBPACED; // 0x0
		// static const ::System::Object JHMOGIIDKDC; // 0x0
		// static const ::System::Object FPAMEEBEOIN; // 0x0
		// static const ::System::Object FGHJJDKKKFJ; // 0x0
		// static const ::System::Object NMPIMFBIJLC; // 0x0
		// static const ::System::Object KMIKOPGBLNI; // 0x0
		// static const ::System::Object GAFENHHEBPG; // 0x0
		// static const ::System::Object DICDJJOJKGF; // 0x0
		// static const ::System::Object OKHIPODEGPI; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGDHODNKGC_CCTOR_OFFSET))();
		}

	};
