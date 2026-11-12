#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JJGALOBLEDK_MKGBADKMKBA_OFFSET UNITYSDK_OFFSET(0xBA26E60)

inline static constexpr unsigned int JJGALOBLEDK_TypeDefinitionIndex = 74813;

	class JJGALOBLEDK : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_JPEBCEKMHPK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJGALOBLEDK")->GetStaticField(0xD5D0);
		}

		static ::System::String* MKGBADKMKBA()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JJGALOBLEDK_MKGBADKMKBA_OFFSET))();
		}

	};
