#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHFOFEKIAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB66CA0)
#define JHFOFEKIAJI_HDOODJHAGOE_OFFSET UNITYSDK_OFFSET(0x1CB667C0)
#define JHFOFEKIAJI_JFNIKNECAJK_OFFSET UNITYSDK_OFFSET(0x1CB66920)
#define JHFOFEKIAJI_KLADDLOJPMH_OFFSET UNITYSDK_OFFSET(0x1CB669C0)
#define JHFOFEKIAJI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CB66B10)

inline static constexpr unsigned int JHFOFEKIAJI_TypeDefinitionIndex = 42178;

	class JHFOFEKIAJI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* OBANGGCIDDB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOFEKIAJI_CTOR_OFFSET))(this);
		}

		::System::Void HDOODJHAGOE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JHFOFEKIAJI_HDOODJHAGOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFNIKNECAJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOFEKIAJI_JFNIKNECAJK_OFFSET))(this);
		}

		::System::Single KLADDLOJPMH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFOFEKIAJI_KLADDLOJPMH_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHFOFEKIAJI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
