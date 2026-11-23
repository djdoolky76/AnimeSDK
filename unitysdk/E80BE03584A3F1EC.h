#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/E3850DE56028A1AB.h"

class AF0029E029BBF115;
class B8BEC2FAC7C5C948;
class BED9DB3A34D9A5A5;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoTMPHyperLink; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E80BE03584A3F1EC_A805A45FFE58895D_OFFSET UNITYSDK_OFFSET(0x2097600)
#define E80BE03584A3F1EC_AF342B27C48A295E_OFFSET UNITYSDK_OFFSET(0x20979F0)
#define E80BE03584A3F1EC_B4B820E9DC511403_OFFSET UNITYSDK_OFFSET(0x20976C0)
#define E80BE03584A3F1EC_EF1EC76DDD093412_OFFSET UNITYSDK_OFFSET(0x2097A80)
#define E80BE03584A3F1EC_F4EE7FDDC92F686A_OFFSET UNITYSDK_OFFSET(0x2097210)
#define E80BE03584A3F1EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x20978E0)
#define E80BE03584A3F1EC__CTOR_OFFSET UNITYSDK_OFFSET(0x2097970)

inline static constexpr unsigned int E80BE03584A3F1EC_TypeDefinitionIndex = 8560;

class E80BE03584A3F1EC : public ::E3850DE56028A1AB
{
public:
	static ::B8BEC2FAC7C5C948** StaticGet_B0F917E6085452FA()
	{
		return (::B8BEC2FAC7C5C948**)Il2CppClass::FromTypeDefinitionIndex(E80BE03584A3F1EC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::AF0029E029BBF115* F87800965C039C9C; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B07850EA97DBB75A<::System::String*, ::System::String*>>* AA31C325E54D285E; // 0x20
	::System::Int32 BF0E29CD6C55F34F; // 0x28

	::ABC::UI::MonoLocalizedTmp* EF1EC76DDD093412()
	{
		return ((::ABC::UI::MonoLocalizedTmp*(*)(::PVOID))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC_EF1EC76DDD093412_OFFSET))(this);
	}

	::System::String* F4EE7FDDC92F686A(::BED9DB3A34D9A5A5* B83442F930EA3E85)
	{
		return ((::System::String*(*)(::PVOID, ::BED9DB3A34D9A5A5*))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC_F4EE7FDDC92F686A_OFFSET))(this, B83442F930EA3E85);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC__CTOR_OFFSET))(this);
	}

	::System::Void A805A45FFE58895D(::System::String* F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC_A805A45FFE58895D_OFFSET))(this, F5AEFA05C9F71B82);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E80BE03584A3F1EC__CCTOR_OFFSET))();
	}

	::ABC::UI::MonoTMPHyperLink* AF342B27C48A295E()
	{
		return ((::ABC::UI::MonoTMPHyperLink*(*)(::PVOID))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC_AF342B27C48A295E_OFFSET))(this);
	}

	::System::Void B4B820E9DC511403(::System::String* E97E8D008427A296)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E80BE03584A3F1EC_B4B820E9DC511403_OFFSET))(this, E97E8D008427A296);
	}
};
