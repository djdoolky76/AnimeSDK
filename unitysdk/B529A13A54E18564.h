#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F7581110277793ED.h"

class A9FBF3449F79C851;
class F8BFBBEEDB63A5B4;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define B529A13A54E18564_B8D9A1531155F0F3_OFFSET UNITYSDK_OFFSET(0x208D330)
#define B529A13A54E18564_BCA7FDF7F9377086_OFFSET UNITYSDK_OFFSET(0x208CCD0)
#define B529A13A54E18564_BF1DB1D66E5D5F51_OFFSET UNITYSDK_OFFSET(0x208CB70)
#define B529A13A54E18564_E7474AA7085F4303_OFFSET UNITYSDK_OFFSET(0x208CD80)
#define B529A13A54E18564_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x208CEE0)
#define B529A13A54E18564__CTOR_1_OFFSET UNITYSDK_OFFSET(0x208D280)
#define B529A13A54E18564__CTOR_OFFSET UNITYSDK_OFFSET(0x208D040)

inline static constexpr unsigned int B529A13A54E18564_TypeDefinitionIndex = 8555;

class B529A13A54E18564 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::F8BFBBEEDB63A5B4*>* B136AB63B2C97B06; // 0x10

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B529A13A54E18564_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Boolean B8D9A1531155F0F3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B529A13A54E18564_B8D9A1531155F0F3_OFFSET))(this);
	}

	::System::Boolean E7474AA7085F4303()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B529A13A54E18564_E7474AA7085F4303_OFFSET))(this);
	}

	::System::Void _ctor(::System::Collections::Generic::IList_1<::A9FBF3449F79C851*>* F249CEF1D76E8AD5, ::F7581110277793ED BE68C18FBFC68992, ::System::Single B4A58A4ABADA5C6F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::A9FBF3449F79C851*>*, ::F7581110277793ED, ::System::Single))((::PBYTE)hIl2Cpp + B529A13A54E18564__CTOR_OFFSET))(this, F249CEF1D76E8AD5, BE68C18FBFC68992, B4A58A4ABADA5C6F);
	}

	::System::Boolean BF1DB1D66E5D5F51()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B529A13A54E18564_BF1DB1D66E5D5F51_OFFSET))(this);
	}

	::System::Void _ctor_1(::F8BFBBEEDB63A5B4* A8495421398D4CCA)
	{
		return ((::System::Void(*)(::PVOID, ::F8BFBBEEDB63A5B4*))((::PBYTE)hIl2Cpp + B529A13A54E18564__CTOR_1_OFFSET))(this, A8495421398D4CCA);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* BCA7FDF7F9377086()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B529A13A54E18564_BCA7FDF7F9377086_OFFSET))(this);
	}
};
