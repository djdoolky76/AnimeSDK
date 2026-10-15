#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define PCPOMAGBCPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C976C60)

inline static constexpr unsigned int PCPOMAGBCPH_TypeDefinitionIndex = 42785;

	class PCPOMAGBCPH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "PCPOMAGBCPH")->GetStaticField(0x46AA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PCPOMAGBCPH")->GetStaticField(0x46AA8);
		}

		// static const ::System::Object EKEFPDFCNOM; // 0x0
		// static const ::System::Object GOBHAKFGBFE; // 0x0
		// static const ::System::Object NAIEOLPOLDG; // 0x0
		// static const ::System::Object KLHOFPLACEP; // 0x0
		// static const ::System::Object ICCOIHJGBGJ; // 0x0
		// static const ::System::Object KOPEAFNGDAK; // 0x0
		// static const ::System::Object HKPEMNFCCCP; // 0x0
		// static const ::System::Object CBMMGBFNJOJ; // 0x0
		// static const ::System::Object FHBICNMEGMH; // 0x0
		// static const ::System::Object LKHIOAKHGPL; // 0x0
		// static const ::System::Object OJNLILHHPLF; // 0x0
		// static const ::System::Object FOAPJMPCCJH; // 0x0
		// static const ::System::Object JAGBDIGGEEM; // 0x0
		// static const ::System::Object IOALJODLMOF; // 0x0
		// static const ::System::Object KNPLOFAONJF; // 0x0
		// static const ::System::Object OCKJALFHPFL; // 0x0
		// static const ::System::Object HFJCIANDEDP; // 0x0
		// static const ::System::Object LFLKLNGNDED; // 0x0
		// static const ::System::Object NLLFKMLDIBB; // 0x0
		// static const ::System::Object PEJNMMHENGL; // 0x0
		// static const ::System::Object MNABAPBCDPH; // 0x0
		// static const ::System::Object CEKPHDEINIO; // 0x0
		// static const ::System::Object JBCLHHHGKKD; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPOMAGBCPH_CCTOR_OFFSET))();
		}

	};
