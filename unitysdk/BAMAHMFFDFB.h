#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }

#define BAMAHMFFDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E74610)
#define BAMAHMFFDFB_IJKPJINOHHF_1_OFFSET UNITYSDK_OFFSET(0x15E744F0)
#define BAMAHMFFDFB_IJKPJINOHHF_OFFSET UNITYSDK_OFFSET(0x15E74460)
#define BAMAHMFFDFB_NNBFNHLFCKA_OFFSET UNITYSDK_OFFSET(0x15E74580)

	class BAMAHMFFDFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAHMFFDFB_CTOR_OFFSET))(this);
		}

		::System::String* IJKPJINOHHF(::RPG::Client::TextID a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BAMAHMFFDFB_IJKPJINOHHF_OFFSET))(this, a1);
		}

		::System::String* IJKPJINOHHF_1(::RPG::Client::TextID a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + BAMAHMFFDFB_IJKPJINOHHF_1_OFFSET))(this, a1, a2);
		}

		::System::String* NNBFNHLFCKA(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BAMAHMFFDFB_NNBFNHLFCKA_OFFSET))(this, a1, a2);
		}

	};
