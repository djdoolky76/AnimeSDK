#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define BFA6F0F46C6DFE8A_A502B8ECD8FEFCC3_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BFA6F0F46C6DFE8A_AC0A154884FAF48B_OFFSET UNITYSDK_OFFSET(0x3BD16E0)
#define BFA6F0F46C6DFE8A__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD1820)

inline static constexpr unsigned int BFA6F0F46C6DFE8A_TypeDefinitionIndex = 11203;

class BFA6F0F46C6DFE8A : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* FDD5BFD40EF52DE8; // 0x10
	::System::String* F9A771EAA4ACC4EC; // 0x18
	::System::Boolean A43543698B76E7CD; // 0x20
	::System::Byte _padding0[0x7];
	::Il2CppArray<::System::Byte>* FC4B512BF2322280; // 0x28
	::System::Security::Cryptography::RSA* EC969B101FDBD254; // 0x30

	::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BFA6F0F46C6DFE8A__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	::System::Void AC0A154884FAF48B(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BFA6F0F46C6DFE8A_AC0A154884FAF48B_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	::System::Void A502B8ECD8FEFCC3(::System::Object* AD0CAFBAFB8B01EA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFA6F0F46C6DFE8A_A502B8ECD8FEFCC3_OFFSET))(this, AD0CAFBAFB8B01EA);
	}
};
