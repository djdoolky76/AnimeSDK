#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJLDHECLIH;
namespace System { class Object; }

#define IOJLDHECLIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AADE0)
#define IOJLDHECLIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AAE20)
#define IOJLDHECLIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6AAE30)

inline static constexpr unsigned int IOJLDHECLIH___c_TypeDefinitionIndex = 34851;

	class IOJLDHECLIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJLDHECLIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH___C_CTOR_OFFSET))(this);
		}

		::IOJLDHECLIH* __cctor_b__28_0()
		{
			return ((::IOJLDHECLIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
