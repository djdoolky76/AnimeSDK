#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class OAFCCICMILM;

#define DKBKIMNADAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2C010)
#define DKBKIMNADAK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA2C020)
#define DKBKIMNADAK_JNCLEMOHCKO_OFFSET UNITYSDK_OFFSET(0x1CA2DE20)

	class DKBKIMNADAK : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + DKBKIMNADAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBKIMNADAK_EXECUTE_OFFSET))(this);
		}

		::System::Void JNCLEMOHCKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBKIMNADAK_JNCLEMOHCKO_OFFSET))(this);
		}

	};
