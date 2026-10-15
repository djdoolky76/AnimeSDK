#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKMKMPKIEF;
namespace System { class Object; }

#define MFKMKMPKIEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ED6B0)
#define MFKMKMPKIEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ED6F0)
#define MFKMKMPKIEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9ED700)

inline static constexpr unsigned int MFKMKMPKIEF___c_TypeDefinitionIndex = 26638;

	class MFKMKMPKIEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C_CTOR_OFFSET))(this);
		}

		::MFKMKMPKIEF* __cctor_b__33_0()
		{
			return ((::MFKMKMPKIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
