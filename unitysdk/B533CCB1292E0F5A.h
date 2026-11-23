#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define B533CCB1292E0F5A_A5AFA9AEF5437BA8_OFFSET UNITYSDK_OFFSET(0x40DFB10)
#define B533CCB1292E0F5A_A62BA215E62FEBC4_OFFSET UNITYSDK_OFFSET(0x40DF580)
#define B533CCB1292E0F5A_BDD13DBF09C62987_OFFSET UNITYSDK_OFFSET(0x40DF750)
#define B533CCB1292E0F5A_F6ABC519AF9DD6B7_OFFSET UNITYSDK_OFFSET(0x40DFA40)

inline static constexpr unsigned int B533CCB1292E0F5A_TypeDefinitionIndex = 20238;

class B533CCB1292E0F5A : public ::System::Object
{
public:
	static ::System::String* BDD13DBF09C62987(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* E342C6021260A1EB, ::System::String* F79B4D487F303AB2)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_BDD13DBF09C62987_OFFSET))(E342C6021260A1EB, F79B4D487F303AB2);
	}

	static ::System::Boolean A5AFA9AEF5437BA8(::UnityEngine::Timeline::TrackAsset* EFE497ABF6BF98D8, ::System::Type* B15A78251612753F)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Type*))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_A5AFA9AEF5437BA8_OFFSET))(EFE497ABF6BF98D8, B15A78251612753F);
	}

	static ::UnityEngine::AnimationClip* A62BA215E62FEBC4(::System::String* F79B4D487F303AB2, ::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED, ::System::Boolean ACD6BD904B755E3C)
	{
		return ((::UnityEngine::AnimationClip*(*)(::System::String*, ::UnityEngine::Timeline::TrackAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_A62BA215E62FEBC4_OFFSET))(F79B4D487F303AB2, B630861FBF48C2ED, ACD6BD904B755E3C);
	}

	static ::System::Void F6ABC519AF9DD6B7(::UnityEngine::Object* ED387F7858E38F8D, ::UnityEngine::Object* A2B439D6F4E2B9CB)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_F6ABC519AF9DD6B7_OFFSET))(ED387F7858E38F8D, A2B439D6F4E2B9CB);
	}
};
