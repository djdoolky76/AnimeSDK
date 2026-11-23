#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkSpatialAudioListener;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_B98284D3039A3468_OFFSET UNITYSDK_OFFSET(0x2929920)
#define AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_BDD3E08703C1C2A0_OFFSET UNITYSDK_OFFSET(0x2929680)
#define AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_F77A2EEABE94D751_OFFSET UNITYSDK_OFFSET(0x29295B0)
#define AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_FD9C9DB2A6075926_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4__CTOR_OFFSET UNITYSDK_OFFSET(0x29299D0)

inline static constexpr unsigned int AkSpatialAudioListener_A78D7BBCC8A6A5D4_TypeDefinitionIndex = 20490;

class AkSpatialAudioListener_A78D7BBCC8A6A5D4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkSpatialAudioListener*>* E06F153CFC57FD24; // 0x10

	::System::Collections::Generic::List_1<::AkSpatialAudioListener*>* FD9C9DB2A6075926()
	{
		return ((::System::Collections::Generic::List_1<::AkSpatialAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_FD9C9DB2A6075926_OFFSET))(this);
	}

	::System::Boolean F77A2EEABE94D751(::AkSpatialAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkSpatialAudioListener*))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_F77A2EEABE94D751_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Boolean B98284D3039A3468(::AkSpatialAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkSpatialAudioListener*))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_B98284D3039A3468_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Void BDD3E08703C1C2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4_BDD3E08703C1C2A0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A78D7BBCC8A6A5D4__CTOR_OFFSET))(this);
	}
};
