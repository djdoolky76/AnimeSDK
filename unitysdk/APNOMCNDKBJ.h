#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJGFDAOCKG;
namespace System { class String; }

#define APNOMCNDKBJ_BHAFIIMIFNK_OFFSET UNITYSDK_OFFSET(0x15BBF710)
#define APNOMCNDKBJ_FBGEOJGDFPL_OFFSET UNITYSDK_OFFSET(0x15BBF7F0)

	class APNOMCNDKBJ : public ::System::Object
	{
	public:
		static ::System::String* BHAFIIMIFNK(::BPJGFDAOCKG* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::BPJGFDAOCKG*, ::System::Boolean))((::PBYTE)hIl2Cpp + APNOMCNDKBJ_BHAFIIMIFNK_OFFSET))(a1, a2);
		}

		static ::System::String* FBGEOJGDFPL(::BPJGFDAOCKG* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::BPJGFDAOCKG*, ::System::Boolean))((::PBYTE)hIl2Cpp + APNOMCNDKBJ_FBGEOJGDFPL_OFFSET))(a1, a2);
		}

	};
