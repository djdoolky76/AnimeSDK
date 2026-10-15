#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define CGAIKFKNFDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DCE8FA0)
#define CGAIKFKNFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE9330)

inline static constexpr unsigned int CGAIKFKNFDC_TypeDefinitionIndex = 6187;

	class CGAIKFKNFDC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAIKFKNFDC_CTOR_OFFSET))(this);
		}

		static ::System::Void BPLPBPMEODA(::Il2CppArray<::System::Single>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CGAIKFKNFDC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
