#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Text::RegularExpressions { class Regex; }

#define HFALFOEAKOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C5AEB0)
#define HFALFOEAKOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5AEA0)

inline static constexpr unsigned int HFALFOEAKOM_TypeDefinitionIndex = 67561;

	class HFALFOEAKOM : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ONFNBJHEIBB()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "HFALFOEAKOM")->GetStaticField(0x11120);
		}

		// static const ::System::String* EGGIIFLGBJO; // 0x0
		// static const ::System::String* PBFMDJOJFKI; // 0x0
		// static const ::System::Object NDPOIKOIFFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFALFOEAKOM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFALFOEAKOM_CCTOR_OFFSET))();
		}

	};
