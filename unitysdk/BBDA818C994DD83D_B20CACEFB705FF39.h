#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E385E5F915CD11C5;
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define BBDA818C994DD83D_B20CACEFB705FF39_E81F422FE90A76D3_OFFSET UNITYSDK_OFFSET(0x3B74910)
#define BBDA818C994DD83D_B20CACEFB705FF39__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBDA818C994DD83D_B20CACEFB705FF39_TypeDefinitionIndex = 10353;

class BBDA818C994DD83D_B20CACEFB705FF39 : public ::System::Object
{
public:
	::System::Type* A288CB28FC2A6DA3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDA818C994DD83D_B20CACEFB705FF39__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Reflection::MemberInfo*>* E81F422FE90A76D3(::E385E5F915CD11C5* BAF8A3E3C5E8EAEF)
	{
		return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::E385E5F915CD11C5*))((::PBYTE)hIl2Cpp + BBDA818C994DD83D_B20CACEFB705FF39_E81F422FE90A76D3_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
