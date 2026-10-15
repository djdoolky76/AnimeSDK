#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPGFNBBIGLH;
namespace System { class Object; }

#define CPGFNBBIGLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E110A20)
#define CPGFNBBIGLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E110A60)
#define CPGFNBBIGLH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E110A70)

inline static constexpr unsigned int CPGFNBBIGLH___c_TypeDefinitionIndex = 30311;

	class CPGFNBBIGLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C_CTOR_OFFSET))(this);
		}

		::CPGFNBBIGLH* __cctor_b__33_0()
		{
			return ((::CPGFNBBIGLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
