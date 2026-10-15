#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::Timeline { class CharacterStoryMoveData_BezierPathPoint; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCFCCNCGOFL_ABPLLELBDIF_OFFSET UNITYSDK_OFFSET(0x15C190D0)
#define HCFCCNCGOFL_BNCIMAOJIEP_OFFSET UNITYSDK_OFFSET(0x15C18B10)
#define HCFCCNCGOFL_CIDOMBNDOGI_OFFSET UNITYSDK_OFFSET(0x15C19C90)
#define HCFCCNCGOFL_DDDCIGMKNNL_OFFSET UNITYSDK_OFFSET(0x15C19A90)
#define HCFCCNCGOFL_DFDNJNKEPGP_OFFSET UNITYSDK_OFFSET(0x15C18CE0)
#define HCFCCNCGOFL_DOCHOPDIJGI_OFFSET UNITYSDK_OFFSET(0x15C18C70)
#define HCFCCNCGOFL_EBLACINHBJM_OFFSET UNITYSDK_OFFSET(0x15C19DD0)
#define HCFCCNCGOFL_EMNMPEBCAMP_OFFSET UNITYSDK_OFFSET(0x15C191F0)
#define HCFCCNCGOFL_LMBFIPFFHKE_OFFSET UNITYSDK_OFFSET(0x15C18EB0)
#define HCFCCNCGOFL_LPHENOFGPAO_OFFSET UNITYSDK_OFFSET(0x15C19950)

	class HCFCCNCGOFL : public ::System::Object
	{
	public:
		static ::System::Single BNCIMAOJIEP(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_BNCIMAOJIEP_OFFSET))(a1);
		}

		static ::System::Single DFDNJNKEPGP(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_DFDNJNKEPGP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 LMBFIPFFHKE(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_LMBFIPFFHKE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 DDDCIGMKNNL(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_DDDCIGMKNNL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ABPLLELBDIF(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Int32 a3, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a4, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a5)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Int32, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_ABPLLELBDIF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 LPHENOFGPAO(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a1, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::System::Single))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_LPHENOFGPAO_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 CIDOMBNDOGI(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a1, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::System::Single))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_CIDOMBNDOGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DOCHOPDIJGI(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a1, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_DOCHOPDIJGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EBLACINHBJM(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a1, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Single(*)(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_EBLACINHBJM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single EMNMPEBCAMP(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a1, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HCFCCNCGOFL_EMNMPEBCAMP_OFFSET))(a1, a2, a3, a4);
		}

	};
