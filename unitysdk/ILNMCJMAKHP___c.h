#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define ILNMCJMAKHP___C_ECNOPPACJNH_OFFSET UNITYSDK_OFFSET(0x1870ED90)
#define ILNMCJMAKHP___C_GJDOPJKJEOJ_OFFSET UNITYSDK_OFFSET(0x1870ED00)
#define ILNMCJMAKHP___C_LOOBAEDOMPM_OFFSET UNITYSDK_OFFSET(0x1870EC50)
#define ILNMCJMAKHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870EC00)
#define ILNMCJMAKHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1870EC40)

inline static constexpr unsigned int ILNMCJMAKHP___c_TypeDefinitionIndex = 62511;

class ILNMCJMAKHP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ILNMCJMAKHP___c_TypeDefinitionIndex)->GetStaticField(0x3E1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILNMCJMAKHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNMCJMAKHP___C__CTOR_OFFSET))(this);
	}

	::System::String* LOOBAEDOMPM(::System::Int32 PNPMMLNCDNK)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILNMCJMAKHP___C_LOOBAEDOMPM_OFFSET))(this, PNPMMLNCDNK);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* GJDOPJKJEOJ()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNMCJMAKHP___C_GJDOPJKJEOJ_OFFSET))(this);
	}

	::System::Boolean ECNOPPACJNH(::System::Int32 IPMMCGDMODG, ::System::Int32 PNPMMLNCDNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ILNMCJMAKHP___C_ECNOPPACJNH_OFFSET))(this, IPMMCGDMODG, PNPMMLNCDNK);
	}
};
