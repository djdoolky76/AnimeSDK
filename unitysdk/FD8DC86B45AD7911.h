#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FD8DC86B45AD7911_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x3ADDA10)
#define FD8DC86B45AD7911_A8D329CEB21AEB8C_OFFSET UNITYSDK_OFFSET(0x29CFF60)
#define FD8DC86B45AD7911_B9A62B0A2FDA4313_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FD8DC86B45AD7911_EB718FA2DF6ED673_OFFSET UNITYSDK_OFFSET(0x3ADDB90)
#define FD8DC86B45AD7911_F12F46FFB22440B2_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define FD8DC86B45AD7911_F8F6CECE4234E6F2_OFFSET UNITYSDK_OFFSET(0x3ADDB30)
#define FD8DC86B45AD7911_FBC0248000618FDD_OFFSET UNITYSDK_OFFSET(0x3ADDA00)
#define FD8DC86B45AD7911_FE75BD7E163E135D_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FD8DC86B45AD7911_FF197139C07B7326_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FD8DC86B45AD7911__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD8DC86B45AD7911_TypeDefinitionIndex = 12144;

class FD8DC86B45AD7911 : public ::System::Object
{
public:
	::System::Action* E36F3FC8EB1DB96E; // 0x10
	::System::Action_1<::System::String*>* F1262CD5F20338FF; // 0x18

	::System::Void FF197139C07B7326(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_FF197139C07B7326_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FBC0248000618FDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_FBC0248000618FDD_OFFSET))(this);
	}

	::System::Action* FE75BD7E163E135D()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_FE75BD7E163E135D_OFFSET))(this);
	}

	::System::Void A8D329CEB21AEB8C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_A8D329CEB21AEB8C_OFFSET))(this);
	}

	::System::Void EB718FA2DF6ED673(::System::String* F78BB1E9FB95AB28)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_EB718FA2DF6ED673_OFFSET))(this, F78BB1E9FB95AB28);
	}

	::System::Void A16C8ED92C989C9B(::System::String* F51E83A249C13FAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_A16C8ED92C989C9B_OFFSET))(this, F51E83A249C13FAD);
	}

	::System::Action_1<::System::String*>* B9A62B0A2FDA4313()
	{
		return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_B9A62B0A2FDA4313_OFFSET))(this);
	}

	::System::Void F12F46FFB22440B2(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_F12F46FFB22440B2_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F8F6CECE4234E6F2(::System::Int32 FF0A37159A523E06)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911_F8F6CECE4234E6F2_OFFSET))(this, FF0A37159A523E06);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8DC86B45AD7911__CTOR_OFFSET))(this);
	}
};
