#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;

#define OOOMFGFNAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x196B4540)
#define OOOMFGFNAIO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x196B4550)
#define OOOMFGFNAIO_ONHIT_OFFSET UNITYSDK_OFFSET(0x196B4C00)

inline static constexpr unsigned int OOOMFGFNAIO_TypeDefinitionIndex = 78935;

	class OOOMFGFNAIO : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOMFGFNAIO_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnHit(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO_ONHIT_OFFSET))(this, a1);
		}

	};
