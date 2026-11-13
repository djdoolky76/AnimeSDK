#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFDIEEHGJED.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COLDDJCPBKG_FAHAOMOLJAO_CTOR_OFFSET UNITYSDK_OFFSET(0x19165100)

inline static constexpr unsigned int COLDDJCPBKG_FAHAOMOLJAO_TypeDefinitionIndex = 80191;

	class COLDDJCPBKG_FAHAOMOLJAO : public ::DFDIEEHGJED
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* BCEFDINCEMD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLDDJCPBKG_FAHAOMOLJAO_CTOR_OFFSET))(this);
		}

	};
