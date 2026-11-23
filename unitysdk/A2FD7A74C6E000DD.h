#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E941FE2D6FB8AB46.h"

class AB642D1382756991;
class ACBE6BD33FB9C565;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Object; }

#define A2FD7A74C6E000DD_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x17A5EC0)
#define A2FD7A74C6E000DD_ACBEADB091F39F84_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define A2FD7A74C6E000DD_B9366475A263A6E9_OFFSET UNITYSDK_OFFSET(0x177ECD0)
#define A2FD7A74C6E000DD_F7EA3A3DC2891F7C_OFFSET UNITYSDK_OFFSET(0x1685600)
#define A2FD7A74C6E000DD_F93EFF89EF6CCCFB_OFFSET UNITYSDK_OFFSET(0x17A5D90)
#define A2FD7A74C6E000DD_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x17A5E20)
#define A2FD7A74C6E000DD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6240)

inline static constexpr unsigned int A2FD7A74C6E000DD_TypeDefinitionIndex = 862;

class A2FD7A74C6E000DD : public ::E941FE2D6FB8AB46
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* A39B972840A8050B; // 0x48
	::UnityEngine::Animator* E5C30A487F75FCC7; // 0x50

	::UnityEngine::Animator* F7EA3A3DC2891F7C()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_F7EA3A3DC2891F7C_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD__CTOR_OFFSET))(this);
	}

	::System::Void B9366475A263A6E9(::UnityEngine::Animator* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_B9366475A263A6E9_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean F93EFF89EF6CCCFB(::System::String* E8236DC369E18809)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_F93EFF89EF6CCCFB_OFFSET))(this, E8236DC369E18809);
	}

	::System::Void A1E97155B145443C(::ACBE6BD33FB9C565* ACDE58E97E37D13C, ::AB642D1382756991* EEF688477002B28B)
	{
		return ((::System::Void(*)(::PVOID, ::ACBE6BD33FB9C565*, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_A1E97155B145443C_OFFSET))(this, ACDE58E97E37D13C, EEF688477002B28B);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* ACBEADB091F39F84()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A2FD7A74C6E000DD_ACBEADB091F39F84_OFFSET))(this);
	}
};
