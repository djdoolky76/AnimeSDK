#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define DJLICLEKMOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FD220)

inline static constexpr unsigned int DJLICLEKMOL_TypeDefinitionIndex = 42796;

	class DJLICLEKMOL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "DJLICLEKMOL")->GetStaticField(0x320F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJLICLEKMOL")->GetStaticField(0x320F8);
		}

		// static const ::System::Object IHLBDLKBAKI; // 0x0
		// static const ::System::Object LKLHBOCAJDI; // 0x0
		// static const ::System::Object GMFLDEAHAHB; // 0x0
		// static const ::System::Object JCNAEOBMNDD; // 0x0
		// static const ::System::Object JLMGMPKGOCB; // 0x0
		// static const ::System::Object KKHBMEENGDN; // 0x0
		// static const ::System::Object FBMAIJIDPBP; // 0x0
		// static const ::System::Object CLBBFJEKKKJ; // 0x0
		// static const ::System::Object PHKIIAACLKK; // 0x0
		// static const ::System::Object BPLELDAHAOE; // 0x0
		// static const ::System::Object MIKAOKOPJJM; // 0x0
		// static const ::System::Object EACIMHGLDEK; // 0x0
		// static const ::System::Object CLCMEJFJFOP; // 0x0
		// static const ::System::Object LOHNNIFFPHI; // 0x0
		// static const ::System::Object PACLCDGCOHN; // 0x0
		// static const ::System::Object KLEBJHJCKFJ; // 0x0
		// static const ::System::Object NOEHPNOBEID; // 0x0
		// static const ::System::Object OPAMJLNMNOF; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLICLEKMOL_CCTOR_OFFSET))();
		}

	};
