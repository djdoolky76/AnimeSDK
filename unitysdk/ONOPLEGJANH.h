#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNLHIEJJDEE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONOPLEGJANH_AAOPBDBAMAI_OFFSET UNITYSDK_OFFSET(0x13A76A70)
#define ONOPLEGJANH_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x13A76940)
#define ONOPLEGJANH_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x13A76F70)
#define ONOPLEGJANH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A770C0)
#define ONOPLEGJANH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A770B0)

inline static constexpr unsigned int ONOPLEGJANH_TypeDefinitionIndex = 52481;

class ONOPLEGJANH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::CNLHIEJJDEE*>** StaticGet_GMBADEMMHNM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::CNLHIEJJDEE*>**)Il2CppClass::FromTypeDefinitionIndex(ONOPLEGJANH_TypeDefinitionIndex)->GetStaticField(0x4B220);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOPLEGJANH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONOPLEGJANH__CCTOR_OFFSET))();
	}

	::System::Object* FHDJDIIPGGP(::System::Object* ECMMKCJLBMD, ::System::String* COJLHMMMGEO)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + ONOPLEGJANH_FHDJDIIPGGP_OFFSET))(this, ECMMKCJLBMD, COJLHMMMGEO);
	}

	::System::Void MBHJJNFNGPE(::System::Object* ECMMKCJLBMD, ::System::String* COJLHMMMGEO, ::System::Object* BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + ONOPLEGJANH_MBHJJNFNGPE_OFFSET))(this, ECMMKCJLBMD, COJLHMMMGEO, BPEGDPLGFPO);
	}

	::CNLHIEJJDEE* AAOPBDBAMAI(::System::Object* ECMMKCJLBMD, ::System::String* COJLHMMMGEO)
	{
		return ((::CNLHIEJJDEE*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + ONOPLEGJANH_AAOPBDBAMAI_OFFSET))(this, ECMMKCJLBMD, COJLHMMMGEO);
	}
};
