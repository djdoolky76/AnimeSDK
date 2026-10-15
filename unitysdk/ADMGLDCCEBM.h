#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIFHOHCBMH;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define ADMGLDCCEBM_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1C84A2C0)
#define ADMGLDCCEBM_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1C84A230)
#define ADMGLDCCEBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84A350)
#define ADMGLDCCEBM_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1C84A1A0)
#define ADMGLDCCEBM_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1C84A110)
#define ADMGLDCCEBM_LHIODOLCPFC_OFFSET UNITYSDK_OFFSET(0x1C849FF0)
#define ADMGLDCCEBM_ODBGPJMLIMI_OFFSET UNITYSDK_OFFSET(0x1C849F90)

inline static constexpr unsigned int ADMGLDCCEBM_TypeDefinitionIndex = 42635;

	class ADMGLDCCEBM : public ::System::Object
	{
	public:
		static ::Entitas::IMatcher_1<::LOIFHOHCBMH*>** StaticGet_BNPDODDCDEE()
		{
			return (::Entitas::IMatcher_1<::LOIFHOHCBMH*>**)UnitySDK::FromName("", "ADMGLDCCEBM")->GetStaticField(0x24470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMGLDCCEBM_CTOR_OFFSET))(this);
		}

		static ::Entitas::IMatcher_1<::LOIFHOHCBMH*>* ODBGPJMLIMI()
		{
			return ((::Entitas::IMatcher_1<::LOIFHOHCBMH*>*(*)())((::PBYTE)hIl2Cpp + ADMGLDCCEBM_ODBGPJMLIMI_OFFSET))();
		}

		static ::Entitas::IMatcher_1<::LOIFHOHCBMH*>* LHIODOLCPFC()
		{
			return ((::Entitas::IMatcher_1<::LOIFHOHCBMH*>*(*)())((::PBYTE)hIl2Cpp + ADMGLDCCEBM_LHIODOLCPFC_OFFSET))();
		}

		static ::Entitas::IAllOfMatcher_1<::LOIFHOHCBMH*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::LOIFHOHCBMH*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ADMGLDCCEBM_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::LOIFHOHCBMH*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::LOIFHOHCBMH*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::LOIFHOHCBMH*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::LOIFHOHCBMH*>*>*))((::PBYTE)hIl2Cpp + ADMGLDCCEBM_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::LOIFHOHCBMH*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::LOIFHOHCBMH*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ADMGLDCCEBM_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::LOIFHOHCBMH*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::LOIFHOHCBMH*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::LOIFHOHCBMH*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::LOIFHOHCBMH*>*>*))((::PBYTE)hIl2Cpp + ADMGLDCCEBM_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
