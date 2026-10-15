#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JICKEGCLBMC.h"
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFBFBJGPLJO_CTOR_OFFSET UNITYSDK_OFFSET(0xE818610)
#define DFBFBJGPLJO_GODCHGIMIAJ_OFFSET UNITYSDK_OFFSET(0xE818090)
#define DFBFBJGPLJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE818000)

inline static constexpr unsigned int DFBFBJGPLJO_TypeDefinitionIndex = 82247;

	class DFBFBJGPLJO : public ::JICKEGCLBMC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFBJGPLJO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + DFBFBJGPLJO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* GODCHGIMIAJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFBFBJGPLJO_GODCHGIMIAJ_OFFSET))(this, a1, a2);
		}

	};
