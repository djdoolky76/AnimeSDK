#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBAMDDGPLFP_CPGODLFKMEN_OFFSET UNITYSDK_OFFSET(0x1593AAB0)

inline static constexpr unsigned int GBAMDDGPLFP_TypeDefinitionIndex = 59640;

	class GBAMDDGPLFP : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_HNNPINMLNDA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBAMDDGPLFP")->GetStaticField(0x13280);
		}

		static ::System::Boolean* StaticGet_JDDNLBBFDCK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBAMDDGPLFP")->GetStaticField(0x13281);
		}

		static ::System::Boolean* StaticGet_NAJGBKEANGN()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBAMDDGPLFP")->GetStaticField(0x13282);
		}

		// static const ::System::Object PLMNNMLCMIG; // 0x0
		// static const ::System::Object LEAGJFMEMIN; // 0x0
		// static const ::System::Object DEDIBFIDCJJ; // 0x0
		// static const ::System::Object HKBICKECOJC; // 0x0
		// static const ::System::Object KKNKMAHLLNB; // 0x0
		// static const ::System::Object HKPAOFBAJFF; // 0x0
		// static const ::System::Object IKEJNOEPGPA; // 0x0
		// static const ::System::Object AECHJNNGBNB; // 0x0
		// static const ::System::Object PPILCHIDEPJ; // 0x0
		// static const ::System::Object OBKAEIBDHGD; // 0x0
		// static const ::System::Object ELNPEOKDONC; // 0x0
		// static const ::System::String* JIGCALKBPLM; // 0x0
		// static const ::System::String* HDKCKPGNKME; // 0x0
		// static const ::System::String* BBAEBFMENOM; // 0x0
		static ::System::Void CPGODLFKMEN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBAMDDGPLFP_CPGODLFKMEN_OFFSET))();
		}

	};
