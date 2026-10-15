#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHBPBPEINCA;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AMNHNMCJDAL_ALEFMKNFACE_OFFSET UNITYSDK_OFFSET(0x1EC62C50)
#define AMNHNMCJDAL_EBJFGEANCBI_OFFSET UNITYSDK_OFFSET(0x1EC62640)
#define AMNHNMCJDAL_MAPKLJGOHOP_OFFSET UNITYSDK_OFFSET(0x1EC62BA0)
#define AMNHNMCJDAL_PPOJDJOJDCL_OFFSET UNITYSDK_OFFSET(0x1EC62AF0)

inline static constexpr unsigned int AMNHNMCJDAL_TypeDefinitionIndex = 44100;

	class AMNHNMCJDAL : public ::System::Object
	{
	public:
		static ::NHBPBPEINCA* EBJFGEANCBI(::NHBPBPEINCA* a1)
		{
			return ((::NHBPBPEINCA*(*)(::NHBPBPEINCA*))((::PBYTE)hIl2Cpp + AMNHNMCJDAL_EBJFGEANCBI_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NHBPBPEINCA*>* PPOJDJOJDCL(::NHBPBPEINCA* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NHBPBPEINCA*>*(*)(::NHBPBPEINCA*))((::PBYTE)hIl2Cpp + AMNHNMCJDAL_PPOJDJOJDCL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NHBPBPEINCA*>* MAPKLJGOHOP(::NHBPBPEINCA* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NHBPBPEINCA*>*(*)(::NHBPBPEINCA*))((::PBYTE)hIl2Cpp + AMNHNMCJDAL_MAPKLJGOHOP_OFFSET))(a1);
		}

		static ::NHBPBPEINCA* ALEFMKNFACE(::NHBPBPEINCA* a1, ::System::Func_2<::NHBPBPEINCA*, ::System::Boolean>* a2)
		{
			return ((::NHBPBPEINCA*(*)(::NHBPBPEINCA*, ::System::Func_2<::NHBPBPEINCA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + AMNHNMCJDAL_ALEFMKNFACE_OFFSET))(a1, a2);
		}

	};
