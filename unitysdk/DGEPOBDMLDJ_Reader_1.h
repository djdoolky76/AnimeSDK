#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class FuncByRef_2; }

inline static constexpr unsigned int DGEPOBDMLDJ_Reader_1_TypeDefinitionIndex = 6542;

	template <typename T>
	class DGEPOBDMLDJ_Reader_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_2<::DGEPOBDMLDJ, T>** StaticGet_InternalInvoke()
		{
			return (::RPG::GCFreeClosure::FuncByRef_2<::DGEPOBDMLDJ, T>**)UnitySDK::FromName("", "Reader`1")->GetStaticField(0x0);
		}

		static ::RPG::GCFreeClosure::FuncByRef_2<::DGEPOBDMLDJ, T>** StaticGet_Default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_2<::DGEPOBDMLDJ, T>**)UnitySDK::FromName("", "Reader`1")->GetStaticField(0x0);
		}

	};
