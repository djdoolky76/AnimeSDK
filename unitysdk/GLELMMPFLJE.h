#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLELMMPFLJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB0520)

inline static constexpr unsigned int GLELMMPFLJE_TypeDefinitionIndex = 78526;

	class GLELMMPFLJE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* IKHMDAAIGOF; // 0x10
		::System::Single PJGLBPCJFEK; // 0x18
		::System::Single PMHMEGEJDGP; // 0x1C
		::System::Single HMBJNEIEIJK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELMMPFLJE_CTOR_OFFSET))(this);
		}

	};
