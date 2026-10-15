#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LLIHEIDDEEM_KAFNHAIIOLM_OFFSET UNITYSDK_OFFSET(0xB770680)
#define LLIHEIDDEEM_OGENJNOIIJH_OFFSET UNITYSDK_OFFSET(0xB770610)
#define LLIHEIDDEEM_PCILLJABPKK_OFFSET UNITYSDK_OFFSET(0xB7705A0)

inline static constexpr unsigned int LLIHEIDDEEM_TypeDefinitionIndex = 64620;

	class LLIHEIDDEEM : public ::System::Object
	{
	public:
		// static const ::System::Object NBACEGGKPND; // 0x0
		// static const ::System::Object CFLODGLDHHE; // 0x0
		// static const ::System::Object POECPODEOIN; // 0x0
		// static const ::System::Object AKNFCHOAKGO; // 0x0
		static ::System::Boolean PCILLJABPKK(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLIHEIDDEEM_PCILLJABPKK_OFFSET))(a1);
		}

		static ::System::Boolean OGENJNOIIJH(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLIHEIDDEEM_OGENJNOIIJH_OFFSET))(a1);
		}

		static ::System::Boolean KAFNHAIIOLM(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLIHEIDDEEM_KAFNHAIIOLM_OFFSET))(a1);
		}

	};
