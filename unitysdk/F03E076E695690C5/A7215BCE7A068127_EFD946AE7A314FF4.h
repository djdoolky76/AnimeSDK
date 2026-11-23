#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Object; }

#define F03E076E695690C5_A7215BCE7A068127_EFD946AE7A314FF4_B1B281C5072D25CE_OFFSET UNITYSDK_OFFSET(0x29CEA30)
#define F03E076E695690C5_A7215BCE7A068127_EFD946AE7A314FF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace F03E076E695690C5
{
	inline static constexpr unsigned int A7215BCE7A068127_EFD946AE7A314FF4_TypeDefinitionIndex = 15688;

	class A7215BCE7A068127_EFD946AE7A314FF4 : public ::System::Object
	{
	public:
		::System::Func_3<::System::String*, ::System::Type*, ::UnityEngine::Object*>* ABCBCC5B21FA7C82; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F03E076E695690C5_A7215BCE7A068127_EFD946AE7A314FF4__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* B1B281C5072D25CE(::System::String* EFF983A80A48BB2A, ::System::Type* A288CB28FC2A6DA3)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + F03E076E695690C5_A7215BCE7A068127_EFD946AE7A314FF4_B1B281C5072D25CE_OFFSET))(this, EFF983A80A48BB2A, A288CB28FC2A6DA3);
		}
	};
}
