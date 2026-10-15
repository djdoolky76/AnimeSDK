#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPFGADLHECN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"
class GHIJBLJIEFC;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHIJBLJIEFC_BMEECNHHBKO_OFFSET UNITYSDK_OFFSET(0x15A187F0)
#define GHIJBLJIEFC_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x15A18010)
#define GHIJBLJIEFC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A19310)
#define GHIJBLJIEFC_DBCJCOGGODF_OFFSET UNITYSDK_OFFSET(0x15A180C0)
#define GHIJBLJIEFC_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15A17A80)
#define GHIJBLJIEFC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15A179B0)
#define GHIJBLJIEFC_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x15A179D0)
#define GHIJBLJIEFC_GHKFHPCCKKN_OFFSET UNITYSDK_OFFSET(0x15A19110)
#define GHIJBLJIEFC_IKLDNENPLDN_OFFSET UNITYSDK_OFFSET(0x15A192C0)
#define GHIJBLJIEFC_JCFBHIFFDGM_OFFSET UNITYSDK_OFFSET(0x15A18700)
#define GHIJBLJIEFC_NKHKMHCPAHO_OFFSET UNITYSDK_OFFSET(0x15A183D0)
#define GHIJBLJIEFC_NOONABGDKLO_OFFSET UNITYSDK_OFFSET(0x15A179F0)
#define GHIJBLJIEFC_OCNMIGIECAJ_OFFSET UNITYSDK_OFFSET(0x15A18430)
#define GHIJBLJIEFC_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15A179C0)
#define GHIJBLJIEFC_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x15A179E0)

inline static constexpr unsigned int GHIJBLJIEFC_TypeDefinitionIndex = 52058;

	class GHIJBLJIEFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* EBNPHHCEJKD; // 0x10
		::UnityEngine::Vector2Int _Size_k__BackingField; // 0x18
		::UnityEngine::Vector2Int _Offset_k__BackingField; // 0x20
		::EPFGADLHECN IJNBNFHBENO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_Offset()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_SET_OFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int get_Size()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int NOONABGDKLO()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_NOONABGDKLO_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::IEnumerable_1<::EPFGADLHECN>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Collections::Generic::IEnumerable_1<::EPFGADLHECN>*))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_DLAILGNMFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DBCJCOGGODF(::EPFGADLHECN a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFGADLHECN))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_DBCJCOGGODF_OFFSET))(this, a1);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void OCNMIGIECAJ(::System::Collections::Generic::List_1<::UnityEngine::Bounds>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_OCNMIGIECAJ_OFFSET))(this, a1);
		}

		::System::Void BMEECNHHBKO(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_BMEECNHHBKO_OFFSET))(this, a1);
		}

		::System::Int32 NKHKMHCPAHO(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_NKHKMHCPAHO_OFFSET))(this, a1);
		}

		::System::Boolean JCFBHIFFDGM(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_JCFBHIFFDGM_OFFSET))(this, a1);
		}

		::System::Boolean GHKFHPCCKKN(::GHIJBLJIEFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHIJBLJIEFC*))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_GHKFHPCCKKN_OFFSET))(this, a1);
		}

		::GHIJBLJIEFC* IKLDNENPLDN(::GHIJBLJIEFC* a1)
		{
			return ((::GHIJBLJIEFC*(*)(::PVOID, ::GHIJBLJIEFC*))((::PBYTE)hIl2Cpp + GHIJBLJIEFC_IKLDNENPLDN_OFFSET))(this, a1);
		}

	};
