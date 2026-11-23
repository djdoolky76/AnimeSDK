#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAE126BD5FE568DD;
namespace System { class String; }

#define FC6018708B10DEB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC6018708B10DEB2_TypeDefinitionIndex = 8757;

class FC6018708B10DEB2 : public ::System::Object
{
public:
	::FAE126BD5FE568DD* A4B816EA7C01B52E; // 0x10
	::Il2CppArray<::System::Byte>* B400FAF5F192C6D9; // 0x18
	::System::String* AAD46A807EC9A97C; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC6018708B10DEB2__CTOR_OFFSET))(this);
	}
};
