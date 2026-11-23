#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F0CC6F06C208D16B.h"
#include "unitysdk/FCC2F8EABCD6F945.h"

class F8311488A80A8AFC;
namespace System { class String; }

#define E0E23FA1FA68A928_B51307FA20FF35C2_OFFSET UNITYSDK_OFFSET(0x4415190)
#define E0E23FA1FA68A928_FBC79A24B3B18008_OFFSET UNITYSDK_OFFSET(0x44150F0)
#define E0E23FA1FA68A928__CCTOR_OFFSET UNITYSDK_OFFSET(0x4415660)

inline static constexpr unsigned int E0E23FA1FA68A928_TypeDefinitionIndex = 21129;

class E0E23FA1FA68A928 : public ::System::Object
{
public:
	static ::F8311488A80A8AFC** StaticGet_E07E310826783864()
	{
		return (::F8311488A80A8AFC**)Il2CppClass::FromTypeDefinitionIndex(E0E23FA1FA68A928_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* B51307FA20FF35C2(::FCC2F8EABCD6F945<::System::Char> AB58FFF7077B1130, ::FCC2F8EABCD6F945<::System::String*> BFC23782BAD1518D)
	{
		return ((::System::String*(*)(::FCC2F8EABCD6F945<::System::Char>, ::FCC2F8EABCD6F945<::System::String*>))((::PBYTE)hIl2Cpp + E0E23FA1FA68A928_B51307FA20FF35C2_OFFSET))(AB58FFF7077B1130, BFC23782BAD1518D);
	}

	static ::F0CC6F06C208D16B FBC79A24B3B18008()
	{
		return ((::F0CC6F06C208D16B(*)())((::PBYTE)hIl2Cpp + E0E23FA1FA68A928_FBC79A24B3B18008_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E0E23FA1FA68A928__CCTOR_OFFSET))();
	}
};
