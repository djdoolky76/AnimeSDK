#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGPKLNNFELK;
class KDEFLDJHDEB;
namespace System { class String; }

#define KDEFLDJHDEB_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xB345AF0)
#define KDEFLDJHDEB_BJGIPJPOOJI_OFFSET UNITYSDK_OFFSET(0xB345FC0)
#define KDEFLDJHDEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB346030)
#define KDEFLDJHDEB_KKNLGJMFJCN_OFFSET UNITYSDK_OFFSET(0xB345DC0)

inline static constexpr unsigned int KDEFLDJHDEB_TypeDefinitionIndex = 73749;

	class KDEFLDJHDEB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* HHBCANKANID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEFLDJHDEB_CTOR_OFFSET))(this);
		}

		::KDEFLDJHDEB* APIDHHKLGEJ(::System::String* a1, ::DGPKLNNFELK* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::KDEFLDJHDEB*(*)(::PVOID, ::System::String*, ::DGPKLNNFELK*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + KDEFLDJHDEB_APIDHHKLGEJ_OFFSET))(this, a1, a2, a3);
		}

		::KDEFLDJHDEB* KKNLGJMFJCN(::System::String* a1)
		{
			return ((::KDEFLDJHDEB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDEFLDJHDEB_KKNLGJMFJCN_OFFSET))(this, a1);
		}

		::System::String* BJGIPJPOOJI(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDEFLDJHDEB_BJGIPJPOOJI_OFFSET))(this, a1);
		}

	};
