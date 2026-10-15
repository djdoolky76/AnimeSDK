#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFCKFKJFKLO;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KCPJAAHHPGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB33F110)
#define KCPJAAHHPGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB33EC40)
#define KCPJAAHHPGK_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xB33EC20)
#define KCPJAAHHPGK_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xB33EC30)

inline static constexpr unsigned int KCPJAAHHPGK_TypeDefinitionIndex = 79568;

	class KCPJAAHHPGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::CFCKFKJFKLO*>* _Constraints_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPJAAHHPGK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CFCKFKJFKLO*>* get_Constraints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CFCKFKJFKLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPJAAHHPGK_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_Constraints(::System::Collections::Generic::IReadOnlyList_1<::CFCKFKJFKLO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CFCKFKJFKLO*>*))((::PBYTE)hIl2Cpp + KCPJAAHHPGK_SET_CONSTRAINTS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPJAAHHPGK_DISPOSE_OFFSET))(this);
		}

	};
