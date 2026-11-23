#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FBDCC08F136F17D1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F51ECE7B08964B2E_E96482631CFA0BA2_OFFSET UNITYSDK_OFFSET(0x2199BC0)
#define F51ECE7B08964B2E_FDE566D52734FA2C_1_OFFSET UNITYSDK_OFFSET(0x2199F30)
#define F51ECE7B08964B2E_FDE566D52734FA2C_2_OFFSET UNITYSDK_OFFSET(0x2199DB0)
#define F51ECE7B08964B2E_FDE566D52734FA2C_OFFSET UNITYSDK_OFFSET(0x2199D40)

inline static constexpr unsigned int F51ECE7B08964B2E_TypeDefinitionIndex = 8750;

class F51ECE7B08964B2E : public ::System::Object
{
public:
	static ::System::Void FDE566D52734FA2C(::System::String* B960AC235824C6C8, ::System::Boolean F44E37A5825B7ABC)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F51ECE7B08964B2E_FDE566D52734FA2C_OFFSET))(B960AC235824C6C8, F44E37A5825B7ABC);
	}

	static ::System::Void FDE566D52734FA2C_1(::E68AA4EB51923C98::FBDCC08F136F17D1 FCBF0167F3DA7733, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B8CE32B89E264D12)
	{
		return ((::System::Void(*)(::E68AA4EB51923C98::FBDCC08F136F17D1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + F51ECE7B08964B2E_FDE566D52734FA2C_1_OFFSET))(FCBF0167F3DA7733, B8CE32B89E264D12);
	}

	static ::System::Void FDE566D52734FA2C_2(::System::String* B960AC235824C6C8, ::System::UInt32 FC35D802A204299B)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + F51ECE7B08964B2E_FDE566D52734FA2C_2_OFFSET))(B960AC235824C6C8, FC35D802A204299B);
	}

	static ::System::String* E96482631CFA0BA2(::E68AA4EB51923C98::FBDCC08F136F17D1 FCBF0167F3DA7733)
	{
		return ((::System::String*(*)(::E68AA4EB51923C98::FBDCC08F136F17D1))((::PBYTE)hIl2Cpp + F51ECE7B08964B2E_E96482631CFA0BA2_OFFSET))(FCBF0167F3DA7733);
	}
};
