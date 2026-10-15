#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNJPHLBBNBC;
class IAJLELNJPEA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJBAENJMIKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC02BE0)
#define NJBAENJMIKM_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0xBC02AB0)
#define NJBAENJMIKM_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xBC02AC0)

inline static constexpr unsigned int NJBAENJMIKM_TypeDefinitionIndex = 63275;

	class NJBAENJMIKM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IAJLELNJPEA*>* _Conditions_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAENJMIKM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IAJLELNJPEA*>* get_Conditions()
		{
			return ((::System::Collections::Generic::List_1<::IAJLELNJPEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAENJMIKM_GET_CONDITIONS_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::FNJPHLBBNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNJPHLBBNBC*))((::PBYTE)hIl2Cpp + NJBAENJMIKM_LNGKNPJIOML_OFFSET))(this, a1);
		}

	};
